//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVOutputContext, MRAVOutputDeviceSourceInfo, NSArray, NSString;
@protocol OS_dispatch_queue;

@interface MRAVOutputContext : NSObject
{
    NSArray *_outputDevices;
    NSArray *_outputDevicesSnapshot;
    MRAVOutputDeviceSourceInfo *_outputDeviceSourceInfo;
    NSObject<OS_dispatch_queue> *_serialQueue;
    BOOL _isVolumeControlAvailable;
    BOOL _attemptingLogicalDeviceRecovery;
    BOOL _postOutputDeviceChangedScheduled;
    BOOL _postOutputDevicesChangedScheduled;
    BOOL _handleOutputDeviceChangedScheduled;
    BOOL _handleOutputDevicesChangedScheduled;
    BOOL _handleDiscoverySessionOutputDevicesChangedScheduled;
    unsigned int _type;
    NSString *_uniqueIdentifier;
    AVOutputContext *_avOutputContext;
}

+ (void)_initializeAVFNotificationForwarding;
+ (id)_sharedOutputContextFromType:(unsigned int)arg1;
+ (id)_notificationQueue;
+ (id)createOutputContextWithUniqueIdentifier:(id)arg1;
+ (id)sharedSystemScreenContext;
+ (id)sharedSystemAudioContext;
+ (id)sharedAudioPresentationContext;
@property(readonly, nonatomic) AVOutputContext *avOutputContext; // @synthesize avOutputContext=_avOutputContext;
@property(readonly, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (void)_scheduleOutputContextDevicesDidChangeNotification;
- (void)_scheduleOutputContextDeviceDidChangeNotification;
- (void)_reloadOutputDevicesForInitialLoad:(BOOL)arg1;
- (void)_unregisterNotifications;
- (void)_handleOutputDeviceSupportsVolumeDidChangeNotification:(id)arg1;
- (void)_handleOutputDeviceCanSetVolumeDidChangeNotification:(id)arg1;
- (void)_handleOutputDeviceVolumeDidChangeNotification:(id)arg1;
- (void)_registerNotifications;
- (void)_outputContextChangeInitiatedNotification:(id)arg1;
- (void)_handleDiscoverySessionOutputDevicesDidChangeNotification:(id)arg1;
- (void)_handleOutputDevicesDidChangeNotification:(id)arg1;
- (void)_handleOutputDeviceDidChangeNotification:(id)arg1;
@property(nonatomic) float volume;
@property(readonly, nonatomic, getter=isVolumeControlAvailable) BOOL volumeControlAvailable;
@property(readonly, nonatomic) BOOL supportsVolumeControl;
- (void)attemptLogicalDeviceRecovery;
- (void)removeAllOutputDevicesWithCallbackQueue:(id)arg1 block:(id /* CDUnknownBlockType */)arg2;
- (void)removeOutputDevices:(id)arg1 initiator:(id)arg2 withCallbackQueue:(id)arg3 block:(id /* CDUnknownBlockType */)arg4;
- (void)removeOutputDevices:(id)arg1 withCallbackQueue:(id)arg2 block:(id /* CDUnknownBlockType */)arg3;
- (void)addOutputDevices:(id)arg1 initiator:(id)arg2 withCallbackQueue:(id)arg3 block:(id /* CDUnknownBlockType */)arg4;
- (void)addOutputDevices:(id)arg1 withCallbackQueue:(id)arg2 block:(id /* CDUnknownBlockType */)arg3;
- (void)setOutputDevices:(id)arg1 password:(id)arg2 initiator:(id)arg3 withCallbackQueue:(id)arg4 block:(id /* CDUnknownBlockType */)arg5;
- (void)setOutputDevices:(id)arg1 initiator:(id)arg2 withCallbackQueue:(id)arg3 block:(id /* CDUnknownBlockType */)arg4;
- (void)setOutputDevices:(id)arg1 withPassword:(id)arg2 callbackQueue:(id)arg3 block:(id /* CDUnknownBlockType */)arg4;
- (void)setOutputDevices:(id)arg1 withCallbackQueue:(id)arg2 block:(id /* CDUnknownBlockType */)arg3;
- (id)localDevice;
@property(copy, nonatomic) NSArray *outputDevices;
@property(readonly, nonatomic) NSArray *outputDevicesSnapshot;
- (id)description;
- (void)dealloc;
- (id)initWithAVOutputContext:(id)arg1 type:(unsigned int)arg2;

@end

