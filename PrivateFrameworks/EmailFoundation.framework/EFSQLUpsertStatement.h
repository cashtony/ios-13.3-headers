/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

@interface EFSQLUpsertStatement : NSObject {
    NSArray * _conflictTarget;
    EFSQLInsertStatement * _insertStatement;
    EFSQLUpdateStatement * _updateStatement;
}

@property (nonatomic, readonly) NSArray *conflictTarget;
@property (nonatomic, readonly) EFSQLInsertStatement *insertStatement;
@property (nonatomic, readonly) <EFSQLInsertStatementValue> *insertValue;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly, copy) NSString *queryString;
@property (nonatomic, readonly) EFSQLUpdateStatement *updateStatement;
@property (nonatomic, readonly) <EFSQLUpdateStatementValue> *updateValue;
@property (nonatomic, retain) <EFSQLExpressable> *whereClause;

- (void).cxx_destruct;
- (id)conflictTarget;
- (void)enumerateBindingNamesAndValuesUsingBlock:(id /* block */)arg1;
- (id)excludedColumnExpressionForColumnName:(id)arg1;
- (id)initWithTable:(id)arg1 conflictTarget:(id)arg2;
- (id)insertStatement;
- (id)insertValue;
- (bool)isEmpty;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)queryString;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setWhereClause:(id)arg1;
- (id)updateStatement;
- (id)updateValue;
- (id)whereClause;

@end
