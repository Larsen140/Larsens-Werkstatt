#!/bin/sh
# Baut index.html aus der App-Quelle (app.html) und dem Seitenkopf für die installierbare Version.
{
printf '<!doctype html>\n<html lang="de" class="pwa">\n<head>\n<meta charset="utf-8">\n<meta name="viewport" content="width=device-width,initial-scale=1,viewport-fit=cover">\n<link rel="manifest" href="manifest.webmanifest">\n<meta name="theme-color" content="#0b0e13">\n<meta name="mobile-web-app-capable" content="yes">\n<meta name="apple-mobile-web-app-capable" content="yes">\n<meta name="apple-mobile-web-app-status-bar-style" content="black-translucent">\n<meta name="apple-mobile-web-app-title" content="Werkstatt">\n<link rel="apple-touch-icon" href="apple-touch-icon.png">\n<link rel="icon" type="image/png" href="icon-192.png">\n<style>html{color-scheme:dark;background:#11151c}:root{--st:env(safe-area-inset-top,0px);--sb:env(safe-area-inset-bottom,0px)}body{margin:0}html.pwa,html.pwa body{height:100vh;height:var(--H,100vh);overflow:hidden}html.pwa body{position:fixed;top:0;left:0;right:0;bottom:auto;width:100%%}img{max-width:100%%}[hidden]{display:none!important}</style>\n'
awk '/^<div id="boot">/{print "</head>\n<body>"} {print}' app.html
printf '</body>\n</html>\n'
} > index.html
