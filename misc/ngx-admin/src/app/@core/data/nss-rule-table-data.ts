import { Observable } from 'rxjs';

export abstract class NSSRuleTableData<T> {
  abstract getData(name: string): Observable<T>;
  abstract getAll(): Observable<T[]>;
  abstract delete(name: string): Observable<any>;
  abstract post(item: T): Observable<any>;
}