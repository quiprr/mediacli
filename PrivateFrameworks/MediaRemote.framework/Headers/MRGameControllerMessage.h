//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class _MRGameControllerMessageProtobuf;

@interface MRGameControllerMessage : MRProtocolMessage
{
    NSUInteger _priority;
}

- (BOOL)shouldLog;
- (NSUInteger)priority;
- (NSUInteger)type;
@property(readonly, nonatomic) NSUInteger controllerID;
@property(readonly, nonatomic) _MRGameControllerMessageProtobuf *event;
- (id)initWithGameControllerEvent:(id)arg1 controllerID:(NSUInteger)arg2;

@end

