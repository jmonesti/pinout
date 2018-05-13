#include "MyPinout.hpp"
#include "CCPUModel.hpp"

// Constructor and destructor
MyPinout::MyPinout( CCPUModel & _cpu ) :
	CPinout( ),
	cpu( _cpu )
{ };

MyPinout::~MyPinout( )
{ };

// Reset
void MyPinout::Reset( )
{ };

// Interrupt
void MyPinout::Interrupt( uint32 line )
{ };

// Idle
void MyPinout::Idle( )
{ };

// Debug mode
void MyPinout::Debug( )
{ };

// Triggering
void MyPinout::TriggerIn( uint32 trigger )
{ };

bool MyPinout::TriggerOut( uint32 trigger )
{ return false; };

// Memory
bool MyPinout::Read( uint8 * buffer, uint32 address, uint32 & size )
{ return false; };

bool MyPinout::Write( uint8 * buffer, uint32 address, uint32 & size )
{ return false; };

// Configuration
bool MyPinout::GetConfiguration( std::string item, std::string & value )
{ return false; };

bool MyPinout::SetConfiguration( std::string item, std::string value )
{ return false; };

// Version
const char * MyPinout::GetVersion( )
{ return "v1.0"; };
