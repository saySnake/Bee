
#import <UIKit/UIKit.h>

@interface ProductHeadView : UITableViewHeaderFooterView

+ (instancetype)headerCellWith:(UITableView *)tableView;

@property (nonatomic,copy) NSString *title;

@end
