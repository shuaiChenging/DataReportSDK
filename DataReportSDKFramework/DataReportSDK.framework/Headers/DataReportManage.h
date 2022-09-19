//
//  DataReportManage.h
//  DataReportSDKDev
//
//  Created by 徐志成 on 2022/9/15.
//

#import <Foundation/Foundation.h>
#import "TrackParams.h"
NS_ASSUME_NONNULL_BEGIN

@interface DataReportManage : NSObject
/// 初始化SDK
/// @param appName 品牌code
/// @param channel 渠道号
/// @param uid 用户ID (,如果没有用户id,则设置为0)
/// @param url 大数据地址
+ (void)initWithAppName:(NSString *)appName
                channel:(NSString *)channel
                    uid:(NSString *)uid
                    url:(NSString *)url;


/// 上报数据
/// @param eventId 行为编号
/// @param params TrackParams 对象
/// @param number 上传的频率（可选，默认10条）
+ (void)trackDataWithEventId:(NSString *)eventId
                 trackParams:(TrackParams *)params
                      number:(NSNumber * _Nullable)number;

/// 更新uid
/// @param uid 用户ID (,如果没有用户id,则设置为0)
+ (void)refreshUserId:(NSString *)uid;
@end

NS_ASSUME_NONNULL_END
