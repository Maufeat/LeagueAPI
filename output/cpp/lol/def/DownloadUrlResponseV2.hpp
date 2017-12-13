#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct DownloadUrlResponseV2 { 
    std::string url; 
  };
  void to_json(json& j, const DownloadUrlResponseV2& v) {
  j["url"] = v.url; 
  }
  void from_json(const json& j, DownloadUrlResponseV2& v) {
  v.url = j.at("url").get<std::string>(); 
  }
}