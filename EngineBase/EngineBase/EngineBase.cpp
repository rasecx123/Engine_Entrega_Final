// EngineBase.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "RenderingManager.h"
#include "TextureManager.h"
#include "AnimationManager.h"
#include "VideoManager.h"
#include "PhysicsManager.h"
#include "AudioManager.h"
#include "FileSystemManager.h"
#include "MemoryManager.h"
#include"PhysicsDynamicsManager.h"
#include "InputManager.h"

#include<Windows.h>
#include<Xinput.h>
#include <iostream>

RenderingManager *gRenderingManager; //necesita funcion update()
TextureManager *gTextureManager;
AnimationManager *gAnimationManager; //necesita funcion update()
VideoManager *gVideoManager;
PhysicsManager *gPhysicsManager; //necesita funcion update()
AudioManager *gAudioManager;  //necesita funcion update()
FileSystemManager *gFileSystemManager;
MemoryManager *gMemoryManager;
PhysicsDynamicsManager *gPhysicsDynamicsManager; //necesita funcion update()
InputManager *gInputManager; //necesita funcion update()

void Start()
{
	gMemoryManager->startUp();
	gFileSystemManager->startUp();
	gVideoManager->startUp();
	gInputManager->startUp();
	gAudioManager->startUp();
	gTextureManager->startUp();
	gRenderingManager->startUp();
	gAnimationManager->startUp();
	gPhysicsDynamicsManager->startUp();
	gPhysicsManager->startUp();	

}

//void Update
void Run()
{
	
	gRenderingManager->renderingUpdate();
	gAnimationManager->animationUpdate();
	gPhysicsManager->physicsUpdate();
	gAudioManager->audioUpdate();
	gPhysicsDynamicsManager->physicsDynamicsUpdate();
	gInputManager->inputUpdate();
		
	//asi deberia de quedar
	//while (!exit)
	//{
		//gInputManager.inputUpdate();
		//gInputManager.main();
		
	//}
	
	//Queda pendiente pero debe de quedar
	/*while (!exit)
	{
		gInputManager();
		gUpdateManager();
	}*/
}

void ShutDown()
{
	gMemoryManager->shutDown();
	gFileSystemManager->shutDown();
	gVideoManager->shutDown();
	gAudioManager->shutDown();
	gTextureManager->shutDown();
	gRenderingManager->shutDown();
	gAnimationManager->shutDown();
	gPhysicsDynamicsManager->shutDown();
	gPhysicsManager->shutDown();
}

int main()
{
	gRenderingManager = RenderingManager::getInstance();
	gTextureManager = TextureManager::getInstance();
	gAnimationManager = AnimationManager::getInstance();
	gVideoManager = VideoManager::getInstance();
	gPhysicsManager = PhysicsManager::getInstance();
	gAudioManager = AudioManager::getInstance();
	gFileSystemManager = FileSystemManager::getInstance();
	gMemoryManager = MemoryManager::getInstance();
	gPhysicsDynamicsManager = PhysicsDynamicsManager::getInstance();
	gInputManager = InputManager::getInstance();

	//StartUp
	Start();

	//Run 
	std::cout << " \n";
	Run();


	/*while (true)
	{
		Run();
		std::cout << "Down Updates \n";
		if (GetAsyncKeyState(VK_ESCAPE))
		{	
			break;
		}
	}*/
	

	//ShutDown
	ShutDown();

	std::cin.get();

	return 0;
}
