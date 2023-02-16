class Docutils < Formula
  desc "Text processing system for reStructuredText"
  homepage "https://docutils.sourceforge.io"
  url "https://downloads.sourceforge.net/project/docutils/docutils/0.19/docutils-0.19.tar.gz"
  sha256 "33995a6753c30b7f577febfc2c50411fec6aac7f7ffeb7c4cfe5991072dcf9e6"
  license all_of: [:public_domain, "BSD-2-Clause", "GPL-3.0-or-later", "Python-2.0"]
  revision 1

  depends_on "python@3.11"

  def install
    python3 = "python3.11"
    system python3, *Language::Python.setup_install_args(prefix, python3)

    bin.glob("*.py") do |f|
      bin.install_symlink f => f.basename(".py")
    end
  end

  test do
    system bin/"rst2man.py", prefix/"HISTORY.txt"
    system bin/"rst2man", prefix/"HISTORY.txt"
  end
end
