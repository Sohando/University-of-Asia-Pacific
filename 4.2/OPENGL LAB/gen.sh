#!/bin/bash
function Float {        
    rand=$(bc <<< "scale=2; $(printf '0.%02d' $(( $RANDOM % 100))) / 2");
    return $rand;
}

rand1=$(bc <<< "scale=2; $(printf '0.%02d' $(( $RANDOM % 100)))");
rand2=$(bc <<< "scale=2; $(printf '0.%02d' $(( $RANDOM % 100)))");
rand3=$(bc <<< "scale=2; $(printf '0.%02d' $(( $RANDOM % 100)))");
rand4=$(bc <<< "scale=2; $(printf '0.%02d' $(( $RANDOM % 100)))");
rand5=$(bc <<< "scale=2; $(printf '0.%02d' $(( $RANDOM % 100)))");
rand6=$(bc <<< "scale=2; $(printf '0.%02d' $(( $RANDOM % 100)))");
rand7=$(bc <<< "scale=2; $(printf '0.%02d' $(( $RANDOM % 100)))");
rand8=$(bc <<< "scale=2; $(printf '0.%02d' $(( $RANDOM % 100)))");

echo "$rand1" > "gen.txt"
echo "$rand2" >> "gen.txt"
echo "$rand3" >> "gen.txt"
echo "$rand4" >> "gen.txt"
echo "$rand5" >> "gen.txt"
echo "$rand6" >> "gen.txt"
echo "$rand7" >> "gen.txt"
echo "$rand8" >> "gen.txt"
