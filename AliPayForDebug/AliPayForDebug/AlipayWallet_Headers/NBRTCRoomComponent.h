//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NBComponent.h"

#import "BeeRtcRoomDelegate-Protocol.h"

@class BeeRtcRoomView, NSString;

@interface NBRTCRoomComponent : NBComponent <BeeRtcRoomDelegate>
{
    BeeRtcRoomView *_rtcRoomView;
    NSString *_appName;
}

@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) BeeRtcRoomView *rtcRoomView; // @synthesize rtcRoomView=_rtcRoomView;
- (void).cxx_destruct;
- (void)BeeRtcRoomReply:(id)arg1 replyType:(long long)arg2;
- (void)BeeRtcRoomReceiveMessage:(id)arg1;
- (void)BeeRtcRoomReceiveRecordId:(id)arg1;
- (void)BeeRtcRoomPlayViewChage:(id)arg1 feedType:(long long)arg2;
- (void)BeeRtcRoomNetworkChange:(long long)arg1;
- (void)BeeRtcRoomNetWorkQuality:(long long)arg1 bandwidth:(double)arg2 isLocal:(_Bool)arg3;
- (void)BeeRtcRoomErrorState:(long long)arg1 error:(id)arg2;
- (void)BeeRtcRoomDidStopPlay;
- (void)BeeRtcRoomDidReadyPlay;
- (void)BeeRtcRoomDidChangeParticipant:(id)arg1 type:(long long)arg2;
- (void)BeeRtcRoomConnectionStatueChange:(long long)arg1 isLocal:(_Bool)arg2 userId:(id)arg3;
- (void)BeeRtcRoomAudioPlayModeChange:(long long)arg1;
- (void)BeeRtcRoomJoinRoom:(_Bool)arg1 error:(id)arg2;
- (void)BeeRtcRoomCreateRoom:(id)arg1 error:(id)arg2;
- (void)BeeRtcInviteUser:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)componentReceiveMessage:(id)arg1 data:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)componentDataDidChangeWithData:(id)arg1;
- (void)componentDidAppear;
- (void)componentWillDestory;
- (void)componentWillResume;
- (void)componentWillPause;
- (id)contentView;
- (id)initWithConfig:(id)arg1 messageDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

