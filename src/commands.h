#ifndef COMMANDS_H
#define COMMANDS_H


void commandSetWalkSpeed(float walkSpeed);
void commandSetJumpSpeed(float jumpSpeed);
void commandSetJumpHoldTime(float jumpHoldTime);

void commandSaveLandmark(const std::string& name);
void commandShowLandmark();
void commandTeleportToLandmark(const std::string& name);
void commandPrintPosition();
void commandShowEggs();
void commandTeleportToPosition(std::vector<std::string> arguments);

void commandStartServer();
#endif /* COMMANDS_H */