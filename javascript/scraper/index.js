const puppeteer = require('puppeteer');
 
(async () => {
    const browser = await puppeteer.launch();
    const page = await browser.newPage();
    await page.goto('http://online.iesb.br/aonline/logon.asp');

    await page.type('#txtnumero_matricula', '1922130017');
    await page.type('#txtsenha_tac', '05871806171');
    await page.click('#submit');

    //clica no alert
    await page.click('#submit'); 


    await page.screenshot({path: 'iesb.png'});

    await browser.close();
})