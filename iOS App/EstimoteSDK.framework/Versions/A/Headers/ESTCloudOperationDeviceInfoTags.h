//
//   ______     _   _                 _          _____ _____  _  __
//  |  ____|   | | (_)               | |        / ____|  __ \| |/ /
//  | |__   ___| |_ _ _ __ ___   ___ | |_ ___  | (___ | |  | | ' /
//  |  __| / __| __| | '_ ` _ \ / _ \| __/ _ \  \___ \| |  | |  <
//  | |____\__ \ |_| | | | | | | (_) | ||  __/  ____) | |__| | . \
//  |______|___/\__|_|_| |_| |_|\___/ \__\___| |_____/|_____/|_|\_\
//
//
//  Copyright © 2015 Estimote. All rights reserved.

#import <Foundation/Foundation.h>
#import "ESTBeaconOperationProtocol.h"
#import "ESTCloudOperationProtocol.h"
#import "ESTSettingOperation.h"
#import "ESTSettingDeviceInfoTags.h"

NS_ASSUME_NONNULL_BEGIN


/**
 *  ESTCloudOperationDeviceInfoTags allows to create read/write operations for Cloud Tags setting of a device.
 */
@interface ESTCloudOperationDeviceInfoTags : ESTSettingOperation <ESTBeaconOperationProtocol, ESTCloudOperationProtocol>

/**
 *  Method allows to create read operation for Cloud Tags setting.
 *
 *  @param completion Block invoked when the operation is complete.
 *
 *  @return Initialized object.
 */
+ (instancetype)readOperationWithCompletion:(ESTSettingDeviceInfoTagsCompletionBlock)completion;

/**
 *  Method allows to create write operation for Cloud Tags setting.
 *
 *  @param setting    Setting to be written to a device.
 *  @param completion Block invoked when the operation is complete.
 *
 *  @return Initialized object.
 */
+ (instancetype)writeOperationWithSetting:(ESTSettingDeviceInfoTags *)setting completion:(ESTSettingDeviceInfoTagsCompletionBlock)completion;

@end

NS_ASSUME_NONNULL_END