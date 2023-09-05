bool isprime( int n ) {
  bool primeness=true;
  for ( int factor=2; factor<=n/2; factor++ ) {
    if ( n%factor==0 ) {
      primeness = false; break;
    }
  }
  return primeness;
}

