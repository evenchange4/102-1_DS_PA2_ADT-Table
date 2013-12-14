f = File.open("u.item_a", 'w')
(0..100).each do |re|
	File.open("u.item", 'rb').each do |l1|
		t = l1.split("|")	

		f << "#{t[0].to_i+1682*re}|"
		(1..22).each do |i|
			f << "#{t[i]}|"
		end
		f << "#{t[23]}"
	end

end
