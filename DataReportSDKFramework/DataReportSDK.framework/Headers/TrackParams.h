//
//  TrackParams.h
//  BuriedReportSDKDev
//
//  Created by 徐志成 on 2022/9/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TrackParams : NSObject

/// 行为明细信息(参数信息) Json格式{"LottID":5,"LottName":"双色球"}
@property (nonatomic, copy) NSString *eventcontent;

/// 维度
@property (nonatomic, copy) NSString *lon;

/// 经度
@property (nonatomic, copy) NSString *lat;

/// 行政区域代码
@property (nonatomic, copy) NSString *areacode;

/// 详细地址
@property (nonatomic, copy) NSString *address;

/// 父栏目
@property (nonatomic, copy) NSString *pmenu;

/// 当前栏目
@property (nonatomic, copy) NSString *menu;

/// 客户端ip
@property (nonatomic, copy) NSString *ip;

/// 游客ID (与业务无关的设备唯一标识)
@property (nonatomic, copy) NSString *visitorid;

- (instancetype)initWithEventContent:(NSString *)eventcontent
                                 lon:(NSString *)lon
                                 lat:(NSString *)lat
                            areacode:(NSString *)areacode
                             address:(NSString *)address
                               pmenu:(NSString *)pmenu
                                menu:(NSString *)menu
                                  ip:(NSString *)ip
                           visitorid:(NSString *)visitorid;
@end

NS_ASSUME_NONNULL_END
