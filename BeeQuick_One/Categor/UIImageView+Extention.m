#import "UIImageView+Extention.h"
#import "UIImageView+WebCache.h"
@implementation UIImageView (Extention)

- (void)setImageWithURLStr:(NSString *)url placeholderImage:(UIImage *)placeholderImage
{
    [self sd_setImageWithURL:[NSURL URLWithString:url] placeholderImage:placeholderImage];
}
@end
