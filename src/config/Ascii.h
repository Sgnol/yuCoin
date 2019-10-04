// Copyright (c) 2018, The TurtleCoin Developers
// Copyright (c) 2018, The Yucreat Foundation
//
// Please see the included LICENSE file for more information

#pragma once

#include <string>

const std::string windowsAsciiArt = 
"\n                                                                        \n"                                    
"\\  $$     /$$ /$$   /$$  /$$$$$$  /$$$$$$$  /$$$$$$$$  /$$$$$$  /$$$$$$$$ \n"
" \\  $$   /$$/| $$  | $$ /$$__  $$| $$__  $$| $$_____/ /$$__  $$|__  $$__/ \n"
"  \\  $$ /$$/ | $$  | $$| $$  \\__/| $$  \\ $$| $$    | $$  \\ $$  | $$ \n"
"   \\  $$$$/  | $$  | $$| $$      | $$$$$$$/| $$$$$   | $$$$$$$$   | $$ \n"
"    \\  $$/   | $$  | $$| $$      | $$__  $$| $$__/   | $$__  $$   | $$ \n"
"     |  $$    | $$  | $$| $$    $$| $$  \\ $$|$$      | $$  | $$   | $$ \n"
"     | $ $    |  $$$$$$/|  $$$$$$/| $$  | $$| $$$$$$$$| $$  | $$   | $$ \n"
"     |__/    \\______/  \\______/ |__/  |__/|________/|__/  |__/   |__/ \n";

const std::string nonWindowsAsciiArt =
    "\n                                                     \n"
"██╗   ██╗██╗   ██╗ ██████╗██████╗ ███████╗ █████╗ ████████╗\n"
"╚██╗ ██╔╝██║   ██║██╔════╝██╔══██╗██╔════╝██╔══██╗╚══██╔══╝\n"
" ╚████╔╝ ██║   ██║██║     ██████╔╝█████╗  ███████║   ██║\n"
"  ╚██╔╝  ██║   ██║██║     ██╔══██╗██╔══╝  ██╔══██║   ██║\n"
"   ██║   ╚██████╔╝╚██████╗██║  ██║███████╗██║  ██║   ██║\n"
"   ╚═╝    ╚═════╝  ╚═════╝╚═╝  ╚═╝╚══════╝╚═╝  ╚═╝   ╚═╝\n";

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32

const std::string asciiArt = windowsAsciiArt;

#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif