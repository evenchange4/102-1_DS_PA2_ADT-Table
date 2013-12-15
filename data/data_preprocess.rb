require 'digest/md5'

loop_num = ARGV[0].to_i
f = File.open("movie#{loop_num}.dat", 'w')
(0..loop_num-1).each do |re|
	File.open("u.item", 'rb').each do |l1|
		t = l1.split("|")	

		key = Digest::MD5.hexdigest((t[0].to_i+1682*re).to_s)
		f << "#{key}|"
		(1..22).each do |i|
			f << "#{t[i]}|"
		end
		f << "#{t[23]}"
	end

end
