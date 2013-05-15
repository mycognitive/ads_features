#!/bin/sh -x
SOURCE=$1
DEST=$2
DESC=$3
cp -fr $SOURCE $DEST || exit 2
cd $DEST || exit 2
rename s/$SOURCE/$DEST/g *.*
sed -i'.bak' s/$SOURCE/$DEST/g *.* && rm -v *.bak
sed -i'.bak' "s/ads_for_sale/$DEST/g" *.* && rm -v *.bak
sed -i'.bak' "s/Items for Sale/$DESC/g" *.* && rm -v *.bak
sed -i'.bak' "s/Items For Sale/$DESC/g" *.* && rm -v *.bak
sed -i'.bak' "s/For Sale/$DESC/g" *.* && rm -v *.bak

