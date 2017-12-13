#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolAcsAcsEndPoint { 
    std::string url; 
  };
  void to_json(json& j, const LolAcsAcsEndPoint& v) {
    j["url"] = v.url; 
  }
  void from_json(const json& j, LolAcsAcsEndPoint& v) {
    v.url = j.at("url").get<std::string>(); 
  }
}