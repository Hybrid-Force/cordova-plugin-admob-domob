//
//  GADDomobExtras.h
//  DomobAdapter
//
// 
//
//

#import <Foundation/Foundation.h>
#import "GADAdNetworkExtras.h"

@interface GADDomobExtras : NSObject<GADAdNetworkExtras>

/**
 * 为准确的地域性广告设置邮编
   postcode of the user may be used to deliver more relevant ads
 */
@property (nonatomic, copy) NSString *postcode;

/**
   if you what to show 600*500 interstitial View in ipad please set NO,else show 300*250 in both of ipad and iphone.
    若设定 isSame = YES 则iphone与ipad的插屏广告均默认为300*250大小。如果要ipad的插屏为600*500大小，则无需设置，或者设置为NO。
 */
@property (nonatomic,assign)BOOL isSame;

/**
   use to distinguish multiple advertising, this value can be different advertising statistics respectively, the value defined by the developer.
 
   用于区分多个广告位,可以通过该值对不同的广告位分别 进行统计,该值由开发者定义。

*/

@property (nonatomic, copy)NSString *spot;

@end
