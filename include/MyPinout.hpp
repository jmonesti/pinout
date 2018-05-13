#include "CPinout.hpp"

class CCPUModel;

class MyPinout : public CPinout {

private:

    CCPUModel &		cpu;

public:

    // Constructor and destructor
    MyPinout( CCPUModel & cpu );
    virtual ~MyPinout( );

    // Reset
    virtual void Reset( );

    // Interrupt
    virtual void Interrupt( uint32 line );

    // Idle
    virtual void Idle( );

    // Debug mode
    virtual void Debug( );

    // Triggering
    virtual void TriggerIn( uint32 trigger );
    virtual bool TriggerOut( uint32 trigger );

    // Memory
    virtual bool Read( uint8 * buffer, uint32 address, uint32 & size );
    virtual bool Write( uint8 * buffer, uint32 address, uint32 & size );

    // Configuration
    virtual bool GetConfiguration( std::string item, std::string & value );
    virtual bool SetConfiguration( std::string item, std::string value );

    // Version
    virtual const char * GetVersion( );

};
