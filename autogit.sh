for i in {1..$1}
do
	touch a >> stderr
	git add a >> stderr
	git commit -m 'add for git contributions' >> stderr
	rm a >> stderr
	git rm a >> stderr
	git commit -m 'remove for git contributions' >> stderr
done

