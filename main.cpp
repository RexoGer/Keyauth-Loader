﻿#include <Windows.h>
#include "auth.hpp"
#include <string>
#include "utils.hpp"
#include "skStr.h"
#include <chrono>
#include <thread>
std::string tm_to_readable_time(tm ctx);
static std::time_t string_to_timet(std::string timestamp);
static std::tm timet_to_tm(time_t timestamp);
const std::string compilation_date = (std::string)skCrypt(__DATE__);
const std::string compilation_time = (std::string)skCrypt(__TIME__);

using namespace KeyAuth;

std::string name = "Cheatv2"; 
std::string ownerid = "9lCOXVsBK8";
std::string secret = "4bf64a51c0ebe63582812bfb069b375780dc7c131c1b88357f0740f99f6639e3"; 
std::string version = "1.0"; 
std::string url = skCrypt("https://keyauth.win/api/1.2/").decrypt(); 

std::string getCurrentTime() {
	auto now = std::chrono::system_clock::now();
	std::time_t time = std::chrono::system_clock::to_time_t(now);
	std::string currentTime = std::ctime(&time);
	currentTime.erase(currentTime.find_last_not_of("\n") + 1);
	return currentTime;
}

void connectinganimation(int durationMs) {
	const int progressBarWidth = 10;
	int progress = 0; 
	int increment = 10;
	std::string progressBar = "[          ]"; 

	
	while (progress <= 100) {
		
		for (int i = 0; i < progressBarWidth; i++) {
			if (i < progress / (100 / progressBarWidth)) {
				progressBar[i + 1] = '=';
			}
			else {
				progressBar[i + 1] = ' ';
			}
		}

	
		std::cout << "Connecting." << progressBar << " " << progress << " % " << std::flush;

		
		progress += increment;

		
		std::this_thread::sleep_for(std::chrono::milliseconds(durationMs));

	
		std::cout << "\r";
	}


	progressBar = "[==========]";
	std::cout << "Connecting." << progressBar << " 100%" << std::endl;
	Sleep(300);
	system("cls");
	std::cout << "Connected successfully!" << std::endl;
	MessageBeep(MB_OK);
	Sleep(300);
}

api KeyAuthApp(name, ownerid, secret, version, url);

void SpoofZeug()
{
	system("cls");
	std::string consoleTitle = "Matrix Loader | Made by rexo | " + getCurrentTime();
	SetConsoleTitleA(consoleTitle.c_str());
	std::cout << "\033[1;37m"
		<< std::setw(28) << "" << " /$$      /$$  /$$$$$$  /$$$$$$$$ /$$$$$$$  /$$$$$$ /$$   /$$ \n"
		<< std::setw(28) << "" << "| $$$    /$$$ /$$__  $$|__  $$__/| $$__  $$|_  $$_/| $$  / $$ \n"
		<< std::setw(28) << "" << "| $$$$  /$$$$| $$  \\ $$   | $$   | $$  \\ $$  | $$  |  $$/ $$/ \n"
		<< std::setw(28) << "" << "| $$ $$/$$ $$| $$$$$$$$   | $$   | $$$$$$$/  | $$   \\  $$$$/  \n"
		<< std::setw(28) << "" << "| $$  $$$| $$| $$__  $$   | $$   | $$__  $$  | $$    >$$  $$  \n"
		<< std::setw(28) << "" << "| $$\\  $ | $$| $$  | $$   | $$   | $$  \\ $$  | $$   /$$/\\  $$ \n"
		<< std::setw(28) << "" << "| $$ \\/  | $$| $$  | $$   | $$   | $$  | $$ /$$$$$$| $$  \\ $$ \n"
		<< std::setw(28) << "" << "|__/     |__/|__/  |__/   |__/   |__/  |__/|______/|__/  |__/\n"
		<< "\033[0m\n" << std::endl;

	std::cout << "\033[1;33m[!] We thank you for using Matrix Spoofer.\033[0m\n" << std::endl;
	std::cout << "\033[1;37m[1] Spoof\033[0m" << std::endl;
	std::cout << "\033[1;37m[2] Clean\033[0m" << std::endl;
	std::cout << "\033[1;37m[3] Hwid Check\033[0m" << std::endl;
	std::cout << "\033[1;37m[4] Exit\033[0m" << std::endl;
	std::cout << "\n\033[1;32m[#] Please Input Your Selection: \033[0m";

	int option;

	std::cin >> option;
	switch (option)
	{
	case 1:
		system("cls");
		MessageBox(NULL, "https://github.com/RexoGer!", "https://github.com/RexoGer", MB_OK | MB_ICONINFORMATION);
		exit(0);
		break;
	case 2:
		system("cls");
		MessageBox(NULL, "https://github.com/RexoGer!", "https://github.com/RexoGer", MB_OK | MB_ICONINFORMATION);
		exit(0);
		break;
	case 3:
		system("cls");
		MessageBox(NULL, "https://github.com/RexoGer!", "https://github.com/RexoGer", MB_OK | MB_ICONINFORMATION);
		exit(0);
		break;
	case 4:
		system("cls");
		MessageBox(NULL, "https://github.com/RexoGer!", "https://github.com/RexoGer", MB_OK | MB_ICONINFORMATION);
		exit(0);
		break;
	default:
		std::cout << skCrypt("\n\n Status: Failure: Invalid Selection");
		Sleep(3000);
		exit(0);
	}
}

int main()
{
	system("cls");
	std::string consoleTitle = "Matrix Loader | Made by rexo | " + getCurrentTime();
	SetConsoleTitleA(consoleTitle.c_str());
	int durationMs = 300;
	connectinganimation(durationMs);


	KeyAuthApp.init();
	if (!KeyAuthApp.data.success)
	{
		std::cout << skCrypt("\n Status: ") << KeyAuthApp.data.message;
		Sleep(1500);
		exit(0);
	}

	if (KeyAuthApp.checkblack()) {
		abort();
	}
	
	else
	{
		system("cls");
		std::cout << "\033[1;37m"
			<< std::setw(28) << "" << " /$$      /$$  /$$$$$$  /$$$$$$$$ /$$$$$$$  /$$$$$$ /$$   /$$ \n"
			<< std::setw(28) << "" << "| $$$    /$$$ /$$__  $$|__  $$__/| $$__  $$|_  $$_/| $$  / $$ \n"
			<< std::setw(28) << "" << "| $$$$  /$$$$| $$  \\ $$   | $$   | $$  \\ $$  | $$  |  $$/ $$/ \n"
			<< std::setw(28) << "" << "| $$ $$/$$ $$| $$$$$$$$   | $$   | $$$$$$$/  | $$   \\  $$$$/  \n"
			<< std::setw(28) << "" << "| $$  $$$| $$| $$__  $$   | $$   | $$__  $$  | $$    >$$  $$  \n"
			<< std::setw(28) << "" << "| $$\\  $ | $$| $$  | $$   | $$   | $$  \\ $$  | $$   /$$/\\  $$ \n"
			<< std::setw(28) << "" << "| $$ \\/  | $$| $$  | $$   | $$   | $$  | $$ /$$$$$$| $$  \\ $$ \n"
			<< std::setw(28) << "" << "|__/     |__/|__/  |__/   |__/   |__/  |__/|______/|__/  |__/\n"
			<< "\033[0m\n" << std::endl;

		std::cout << "\033[1;31m[!] Disable any antivirus before continue.\033[0m\n" << std::endl;
		std::cout << "\033[1;37m[1] Login With Key\033[0m" << std::endl;
		std::cout << "\033[1;37m[2] Website\033[0m" << std::endl;
		std::cout << "\033[1;37m[3] Discord Server\033[0m" << std::endl;
		std::cout << "\033[1;37m[4] Exit\033[0m" << std::endl;
		std::cout << "\n\033[1;32m[#] Please Input Your Selection: \033[0m";

		int option;
		std::string key;

		std::cin >> option;
		switch (option)
		{
		case 1:
			system("cls");
			std::cout << "\n\033[1;32m[#] Please Enter your license: \033[0m";
			std::cin >> key;
			KeyAuthApp.license(key);
			break;
		case 2:
			system("start https://google.com");
			exit(0);
			break;
		case 3:
			system("start https://google.com");
			exit(0);
			break;
		case 4:
			exit(0);
			break;
		default:
			std::cout << skCrypt("\n\n Status: Failure: Invalid Selection");
			Sleep(3000);
			exit(0);
		}

		if (!KeyAuthApp.data.success)
		{
			std::cout << skCrypt("\n Status: ") << KeyAuthApp.data.message;
			Sleep(1500);
			exit(0);
		}

	}
	

    
	#pragma region example functions
	/*
	std::cout << "\n Waiting for user to login";
	KeyAuthApp.web_login();

	std::cout << "\n Waiting for button to be clicked";
	KeyAuthApp.button("close");
	*/

	/*
	for (std::string subs : KeyAuthApp.data.subscriptions)
	{
		if (subs == "default")
		{
			std::cout << skCrypt("\n User has subscription with name: default");
		}
	}
	*/

	
	/*
	// download file, change file.exe to whatever you want.
	// remember, certain paths like windows folder will require you to turn on auto run as admin https://stackoverflow.com/a/19617989

	std::vector<std::uint8_t> bytes = KeyAuthApp.download("362906");

	if (!KeyAuthApp.data.success) // check whether file downloaded correctly
	{
		std::cout << skCrypt("\n\n Status: ") << KeyAuthApp.data.message;
		Sleep(1500);
		exit(0);
	}

	std::ofstream file("file.dll", std::ios_base::out | std::ios_base::binary);
	file.write((char*)bytes.data(), bytes.size());
	file.close();
	*/
	

	// KeyAuthApp.setvar("discord", "test#0001"); // set the value of user variable 'discord' to 'test#0001'
	// std::string userVar = KeyAuthApp.getvar("discord");
	// if (!KeyAuthApp.data.success) // check whether user variable exists and was retrieved correctly
	// {
	// 	std::cout << skCrypt("\n\n Status: ") << KeyAuthApp.data.message;
	// 	Sleep(1500);
	// 	exit(0);
	// }
	// std::cout << "\n user variable - " + userVar; // get value of the user variable 'discord'
	
	/*
	// let's say you want to send request to https://keyauth.win/api/seller/?sellerkey=f43795eb89d6060b74cdfc56978155ef&type=black&ip=1.1.1.1&hwid=abc
	// but doing that from inside the loader is a bad idea as the link could get leaked.
	// Instead, you should create a webhook with the https://keyauth.win/api/seller/?sellerkey=f43795eb89d6060b74cdfc56978155ef part as the URL
	// then in your loader, put the rest of the link (the other paramaters) in your loader. And then it will send request from KeyAuth server and return response in string resp
	
	// example to send normal request with no POST data
	std::string resp = KeyAuthApp.webhook("5iZMT1f1XW", "?mak=best&debug=1");

	// example to send form data
	resp = KeyAuthApp.webhook("5iZMT1f1XW", "", "type=init&ver=1.0&name=test&ownerid=j9Gj0FTemM", "application/x-www-form-urlencoded");

	// example to send JSON
	resp = KeyAuthApp.webhook("5iZMT1f1XW", "", "{\"content\": \"webhook message here\",\"embeds\": null}", "application/json");
	if (!KeyAuthApp.data.success) // check whether webhook request sent correctly
	{
		std::cout << skCrypt("\n\n Status: ") << KeyAuthApp.data.message;
		Sleep(1500);
		exit(0);
	}
	std::cout << "\n Response recieved from webhook request: " + resp;
	*/

	// get data from global variable with name 'status'
	// std::cout << "\n status - " + KeyAuthApp.var("status");

	// KeyAuthApp.log("user logged in"); // send event to logs. if you set discord webhook in app settings, it will send there instead of dashboard
	// KeyAuthApp.ban(); // ban the current user, must be logged in
	// KeyAuthApp.ban("Don't try to crack my loader, cunt."); // ban the current user (with a reason), must be logged in
	
	/*
	// allow users to communicate amongst each other with through KeyAuth. Thank you Nuss31#1102 for this C++ implementation
	// send chat messages
	std::cout << skCrypt("\n Type Chat message: ");
	std::string message;
	//getline is important cause cin alone stops captureing after a space
	std::getline(std::cin, message);
	if (!KeyAuthApp.chatsend("test", message))
	{
		std::cout << KeyAuthApp.data.message << std::endl;
	}
	// get chat messages
	KeyAuthApp.chatget("test");
	for (int i = 0; i < KeyAuthApp.data.channeldata.size(); i++)
	{
		std::cout << "\n Author:" + KeyAuthApp.data.channeldata[i].author + " | Message:" + KeyAuthApp.data.channeldata[i].message + " | Send Time:" + tm_to_readable_time(timet_to_tm(string_to_timet(KeyAuthApp.data.channeldata[i].timestamp)));
	}
	*/
	
	/* 
	// change username
	// allow users to change their usernames when logged-in
	std::cout << skCrypt("\n Change Username To: ");
	std::string newusername;
	std::cin >> newusername;
	KeyAuthApp.changeusername(newusername);
	if (KeyAuthApp.data.success) 
	{
		std::cout << KeyAuthApp.data.message << std::endl;
	}
	*/
	#pragma endregion Example on how to use KeyAuth functions

	SpoofZeug();
}

std::string tm_to_readable_time(tm ctx) {
	char buffer[80];

	strftime(buffer, sizeof(buffer), "%a %m/%d/%y %H:%M:%S %Z", &ctx);

	return std::string(buffer);
}

static std::time_t string_to_timet(std::string timestamp) {
	auto cv = strtol(timestamp.c_str(), NULL, 10); // long

	return (time_t)cv;
}

static std::tm timet_to_tm(time_t timestamp) {
	std::tm context;

	localtime_s(&context, &timestamp);

	return context;
}