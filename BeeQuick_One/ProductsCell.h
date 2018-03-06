
#import <UIKit/UIKit.h>
@class Goods;
@interface ProductsCell : UITableViewCell


+ (instancetype)cellWithTable:(UITableView *)tableView;

@property (nonatomic,strong)Goods * goods;
@end
