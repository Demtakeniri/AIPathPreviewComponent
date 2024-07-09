# AIPathPreviewComponent
Plugin for Unreal Engine 5 to display the pathing of AIs in 3D.

<img src="https://github.com/Demtakeniri/AIPathPreviewComponentImages/blob/main/ThesisGif_Preview.gif" width="500">

(This plugin is still in development, feel free to report any bug you find and give feedbacks!)

# How to import into an Unreal Engine 5 project

In order to add the tool to an existing project you can:
- Add it through Fork or another git client, to do so copy this repository's https, open the project on your git client, right click on the
  "submodules" button and click on "Add new submodule..." paste the previously copied repository's https as the Repository url and type "Plugins"
  as the Folder.
  
  <img src="https://github.com/Demtakeniri/AIPathPreviewComponentImages/blob/main/AddNewModule.png" width="300">
  
- In case you're not using Fork or any git client at all, you can Clone the repository and manually add the plugin into your project's Plugins folder.

# Setup Guide

Here I'm going to explain what needs to be done in your project in order for the plugin to correctly function once you've imported the plugin inside your project.

If you've already imported the plugin but you do not see it, check if it **is enabled**.

<img src="https://github.com/Demtakeniri/AIPathPreviewComponentImages/blob/main/EnablePlugin.png" width="400">

If it is enable and you still do not see it, make sure yuor content browser **shows plugin contents**. press on the content browset settings 

<img src="https://github.com/Demtakeniri/AIPathPreviewComponentImages/blob/main/ShowPlugin.png" width="175">

## Collision channels setup

Based on the behaviour you want the path preview to have, you may have to create up to two new Collision channels; 

- one of them is used if you want the path preview to adapt to the natural heigth differences of the ground (Landscape for example).

- The other collision channel is used if you want the path preview to change color based on the difficult terrain.
  (The actor to place over the difficult terrain is already provided, you just need to set its collision box to block the newly created channel)

  
## Settings setup

Settings are contained inside two Data Assets called "DA_PathPreviewSettings" and "DA_AutoPathPreviewSettings" **(All->Plugins->AIPathPreviewComponentContent->Content->Blueprints->DataAssets)**. 

The first one contains settings for the tool used actively, the second for the tool used passively and automatically by the **"BP_AutoPathPreviewManager"**.

Open them and customize them to better fit your needs, all variable are commented, just hover them with the mouse to see their description.

<img src="https://github.com/Demtakeniri/AIPathPreviewComponentImages/blob/main/Settings.png" width="500"> <img src="https://github.com/Demtakeniri/AIPathPreviewComponentImages/blob/main/AutoSettings.png" width="500">

# How to start using the path preview

Here I'm going to explain how to properly use the tool provided by the plugin. If you've already finished setupping everything you can start by
taking a look at the examples contained inside the two levels provided with the plugin inside the **"Samples"** folder.

here you'll find two levels: 
- The **"Empty"** level contains a Character controlled by the player throguh a Player Controller that actively uses the path preview.

- The **"L_AutoPathDemo"** contains several AI Controlled pawns and the **BP_AutoPathPreviewManager**, an actor that manages the path preview of several AIs
  automatically, without the need of any setup for those AIs. This level shows a passive way of using the tool. (mainly for debug purposes)

## How to actively use the tool

Here I'm going to explain what to do if you want to use the path preview actively on your player controlled Character. You'll find the needed actors and components
inside the **"Blueprints"** folder

<img src="https://github.com/Demtakeniri/AIPathPreviewComponentImages/blob/main/BaseTools.png" width="500">

### Character And Movement Setup

First of all, open your character's blueprint and add the **"BP_PathPreviewComponent"** to it by clicking on the **"Add"** button in the top-left of the screen.

<img src="https://github.com/Demtakeniri/AIPathPreviewComponentImages/blob/main/AddComponent.png" width="500">

Once you've added the component to the character you then need to call one of its two functions in order to show the path preview:

- **CalculatePathAndShowPreview**: Use this function if you want the system to calculate the path based only on a **Start Point** and an **End Point**.

- **ShowPreviewWithPoints**: Use this function if you want to **calculate the path points manually** and directly provide the full array of points to the system.

  The way of obtaining these points and where to call these functions is completely up to the user.
  You can take a look at **PC_PlayerController** and **BP_Character** to have an example.
  The Path calculation is done through the **Ureal Engine Navigation System**.

### Difficult Terrain Setup

Assuming you ticked the **"ConsiderDifficultTerrain"** bool inside the **DA_PathPreviewSettings** and correctly set up the needed collision channel, to start using the Difficult Terrain option you just have to drag into your scene the **"BP_DifficultTerrainCollision"** actor, place it where you want and modify it to your liking. You can find this actor inside the **"BaseTools"** folder.

You can select one of the two provided types of difficult terrain which will affect the color of the path preview passing through it.

<img src="https://github.com/Demtakeniri/AIPathPreviewComponentImages/blob/main/DifficultTerrainDetails.png" width="300">

## How to passively use the tool (for debug purposes)

In order to use the tool for debug purposes, just drag inside the scene the **"BP_AutoPathPreviewManager"** and it will automatically handle the showing of all active AIs' paths along with some useful infos about pathings.
