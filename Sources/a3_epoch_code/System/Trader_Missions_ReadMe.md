## Trader Mission ##

A config driven mission delivery system. Currently is a simple mission on take a document to another trader and shows the mechanics of starting the mission, triggered events during the mission and a completion option.

The mission is carried out by an fsm, Trader_Missions.fsm, that reads the values in from the config file traderMissions.hpp. Supplied to the fsm are the trader and player objects

**Classes** – Each class contains similar fields, e.g. condition & action. These, mostly, act the same throughout the mission, some array classes will have a random entry picked, that index is remembered for later use on other arrays. This allows for a variation in the same missions and adds a random element into each mission.

## Trader_Missions.hpp Classes ##

**traderMissions** – Parent class.

**missionDelivery** – A single mission, in this case the delivery mission.

## Welcome ##
Sets up the mission and triggers the welcome actions for the player. This could be attached to anything, a trader, house, rock. I am going to use trader for the purposes of this readme.

**Condition** – A condition statement that is call compiled until the condition is met. Once met it triggers the following

**Dialogue**# – A random selection is made here from the array of dialogues. N.B. This index is kept for use throughout the mission.Each marked# class will pick the same ‘mission index’ from the array. For this reason these classes must have the same number of elements.

**Dialogue 2**# – A second dialogue that appears 6 seconds after the first. Currently contained in a spawn.

**Item**# The selected item is placed on the ground near the ‘trader’. See accept for further usage.

**Action** – A single action that, if not equal to “”, will be triggered at this point. (SQF code that is call compiled).

## Accept ##
Checks for the presence of the above item in the players inventory. If found the mission is accepted. This is where a specific mission object would be useful, if itemDocument is used another itemDocument, already in the players inventory, will trigger this class.

**Condition** – Not currently used, condition is decided in the fsm by searching for the item in the players inventory.

**Dialogue**# - Once accept is triggered the dialogue in index position of this array will be triggered.

**Dialogue 2**# - Another dialogue, six seconds later.

The following are gifts / aids that are given to the player once the mission is accepted. To ignore leave value as “” or 0 (zero). Objects are added to a ground weapon holder near the trader.

**Crypto**# - Not currently implemented (requires testing). If greater than zero that amount of crypto will be given to the player.

**Weapon**# - Give player this weapon.

**magazine**# - Give player ammo.

**Item**# - Give player item.

**Action** – Single action to perform.


## In Mission ##
Once accepted these three conditions are checked in the main loop of the mission fsm. This allows for three different scenarios to occur throughout the mission and allows dialogue and action input at these times.

These are separated from the above mission index but do employ their own index based on the random selection of the first dialogue. This inmission index is currently only used to decide the second dialogue (could be employed for usage on actions if desired)

**Inmission1, 2 & 3**

**Condition** – sqf code that is checked every x seconds (see frequency)

**Dialogue** – Random selection from dialogue array. Text is displayed as titleText.

**Dialogue2** -  Index used from dialogue, displays text six seconds later.

**Action** – call compile this sqf if condition met.

**Frequency** – Frequency for this check to run. Allows separation of each in mission class as they are prioritised 1,2,3.

**Completed** – Fairly self explanatory, this class deals with the completion of the mission. Again, the above mission index is employed here. This allows for knowledge of the end goal from the start of the mission.
See Accept class for an explanation of child classes, they all act in exactly the same way.

## Missioncheck ##
This is a separate class that is used to run checks on the sanity (status) of the mission and player. These checks are run during the time when above classes are not being run. Bother during the instinct and action ‘loops’ of the fsm.

This class is for almost instant reactions to the conditions specified. (Runs every three seconds). This class could and should be expanded upon to feedback dialogue and actions to the player to make the mission more interesting and interactive.

**Health** – Keeps a check on the player carrying out the mission. Gives him a health boost if hurt.

**itemLost** – Checks the players inventory for the item from welcome.

**Passed** – Not currently complete. Designed to detect if the player has ‘passed on’ the mission, either deliberately or by dieing and having the mission object looted from his / her body.

**Abandoned** (experimental) – Designed to punish the player for taking the mission accept gifts and running off with them.

## To Do / Thoughts ##
This demonstrates a basic mission system employing a deliver of an object. Further mission types that are more interactive, e.g. AI participation, will require a modified class structure.  This current structure I intend to expand on for further missions.

I am thinking that we need to add specific mission objects and feed an object or class into the fsm to help determine the completion and tracking of a mission.

There is a section that starts to deal with the mission being ‘handed over’ to another player. Firing the fsm on another player would require a pubVarEH so maybe there is a better way to trigger the missions, an eventhandler on the mission object would do.

I am currently adding the ability to add a vehicle as the mission item, if a vehicle it will be dealt with accordingly.