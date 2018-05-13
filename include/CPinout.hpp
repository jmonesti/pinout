#include <string>

#include "PortableTypes.h"

class CPinout {

public:

    // Constructor and destructor
    CPinout( );
    virtual ~CPinout( );

    // Reset
    virtual void Reset( ) = 0;

    // Interrupt
    virtual void Interrupt( uint32 line ) = 0;

    // Idle
    virtual void Idle( ) = 0;

    // Debug mode
    virtual void Debug( ) = 0;

    // Triggering
    virtual void TriggerIn( uint32 trigger ) = 0;
    virtual bool TriggerOut( uint32 trigger ) = 0;

    // Memory
    virtual bool Read( uint8 * buffer, uint32 address, uint32 & size ) = 0;
    virtual bool Write( uint8 * buffer, uint32 address, uint32 & size ) = 0;

    // Configuration
    virtual bool GetConfiguration( std::string item, std::string & value ) = 0;
    virtual bool SetConfiguration( std::string item, std::string value ) = 0;

    // Version
    virtual const char * GetVersion( ) = 0;

};
