import fetch from 'node-fetch';
import Cheerio from 'cheerio';
import fs from 'fs';
import {exec} from 'child_process';

async function main()
{
    // Get from server game and get script
    let f = await fetch('https://www.puzzle-skyscrapers.com/')
    let t = await f.text();
    const $ = Cheerio.load(t);
    let script = $('#rel > script').html();
    let nb = script.split('; var task = \'')[1].split('\'; var loadedId = 0; $(document)')[0].split('/')
    
    // Create file to compile
    let text = fs.readFileSync('bot.c', "utf-8")
    for (var i = 0; i < nb.length; i++) {
        text = text.replace(`/d${i}/`, nb[i])
    }
    fs.writeFileSync('bot_data.c', text);
    
    //try to compile
    exec('cc bot_data.c', (err, stdout, stderr) => {
        if (err) {
            console.error(err)
            return;
        }

        // the *entire* stdout and stderr (buffered)
        console.log(`Compile result: ${stdout}`);
        exec('./a.out', (err, stdout, stderr) => {
            if (err) {
                console.error(err)
                return;
            }

            // the *entire* stdout and stderr (buffered)
            console.log(`${stdout}`);
        })
    })
}

main();