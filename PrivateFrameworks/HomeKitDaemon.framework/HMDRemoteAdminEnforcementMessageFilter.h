/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRemoteAdminEnforcementMessageFilter : HMDMessageFilter <HMFLogging> {
    HMDAdminEnforcementMessageFilter * _adminEnforcementFilter;
    HMDHome * _home;
}

@property (nonatomic) HMDAdminEnforcementMessageFilter *adminEnforcementFilter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) HMDHome *home;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (BOOL)shouldNotCheckMessage:(id)arg1;

- (void).cxx_destruct;
- (BOOL)_isTargetingHome:(id)arg1;
- (BOOL)acceptMessage:(id)arg1 target:(id)arg2 errorReason:(id*)arg3;
- (id)adminEnforcementFilter;
- (id)home;
- (id)initWithName:(id)arg1 home:(id)arg2;
- (id)logIdentifier;
- (void)setAdminEnforcementFilter:(id)arg1;

@end
