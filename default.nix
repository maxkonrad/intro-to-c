with import <nixpkgs> {};

stdenv.mkDerivation {
  name = "iyte-ee103";
  src = ./.;


  buildPhase = "make";

  installPhase = ''
    mkdir -p $out/bin
    mkdir $out/bin/1-Beginner_Projects $out/bin/2-Intermediate_Projects $out/bin/3-Further_Projects
    cp bin/1-Beginner_Projects/ascii_printer $out/bin/1-Beginner_Projects
    cp bin/1-Beginner_Projects/chess_board $out/bin/1-Beginner_Projects
    cp bin/1-Beginner_Projects/fibonacci $out/bin/1-Beginner_Projects
    cp bin/1-Beginner_Projects/furkanselek_fibonacci $out/bin/1-Beginner_Projects
    cp bin/1-Beginner_Projects/guess_the_number $out/bin/1-Beginner_Projects
    cp bin/2-Intermediate_Projects/one $out/bin/2-Intermediate_Projects
    cp bin/2-Intermediate_Projects/two $out/bin/2-Intermediate_Projects
    cp bin/2-Intermediate_Projects/three $out/bin/2-Intermediate_Projects
    cp bin/2-Intermediate_Projects/four $out/bin/2-Intermediate_Projects
    cp bin/2-Intermediate_Projects/five $out/bin/2-Intermediate_Projects
    cp bin/2-Intermediate_Projects/six $out/bin/2-Intermediate_Projects
    cp bin/3-Further_Projects/binary_search $out/bin/3-Further_Projects
    cp bin/3-Further_Projects/single_loop_left_pyramid $out/bin/3-Further_Projects
    cp bin/3-Further_Projects/time_example $out/bin/3-Further_Projects
  '';
}