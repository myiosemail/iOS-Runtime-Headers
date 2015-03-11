/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@class NSArray, NSMutableArray, NSString, NSXPCConnection;

@interface NRDeviceDiscoveryController : NSObject <NRDeviceDiscoveryControllerXPCFrameworkDelegate, NSXPCConnectionDelegate> {
    unsigned int _counter;
    NSArray *_devices;
    NSMutableArray *_mutableDevices;
    NSXPCConnection *_xpcConnection;
}

@property unsigned int counter;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) NSArray * devices;
@property(readonly) unsigned int hash;
@property(retain) NSMutableArray * mutableDevices;
@property(readonly) Class superclass;
@property(retain) NSXPCConnection * xpcConnection;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (BOOL)_xpcConnectToService;
- (void)begin;
- (unsigned int)counter;
- (void)dealloc;
- (id)devices;
- (void)end;
- (id)init;
- (id)mutableDevices;
- (void)setCounter:(unsigned int)arg1;
- (void)setMutableDevices:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)xpcAssertInClient:(id)arg1;
- (id)xpcConnection;
- (void)xpcDidDiscoverDevice:(id)arg1 deviceID:(id)arg2 advertisedName:(id)arg3;
- (void)xpcDidRestartDiscovery;
- (void)xpcSetValue:(id)arg1 forProperty:(id)arg2 deviceID:(id)arg3;

@end