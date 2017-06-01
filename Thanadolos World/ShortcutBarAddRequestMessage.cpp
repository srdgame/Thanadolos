#include "Globals.h"
#include "ShortcutBarAddRequestMessage.hpp"


ShortcutBarAddRequestMessage::ShortcutBarAddRequestMessage(int barType, Shortcut *shortcut)
{
	this->barType = barType;
	this->shortcut = shortcut;

}

ShortcutBarAddRequestMessage::ShortcutBarAddRequestMessage()
{

}

ShortcutBarAddRequestMessage::~ShortcutBarAddRequestMessage()
{
	if (this->shortcut)
		delete this->shortcut;
}

ushort ShortcutBarAddRequestMessage::getId()
{
	return id;
}

std::string ShortcutBarAddRequestMessage::getName()
{
	return "ShortcutBarAddRequestMessage";
}

void ShortcutBarAddRequestMessage::serialize(BinaryWriter& writer)
{
	writer.writeByte(this->barType);
}

void ShortcutBarAddRequestMessage::deserialize(BinaryReader& reader)
{
	{
}