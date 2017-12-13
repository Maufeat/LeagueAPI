#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct RecofrienderLinkResource { 
    bool linked;
    std::string name;
    std::string reason; 
  };
  void to_json(json& j, const RecofrienderLinkResource& v) {
  j["linked"] = v.linked; 
  j["name"] = v.name; 
  j["reason"] = v.reason; 
  }
  void from_json(const json& j, RecofrienderLinkResource& v) {
  v.linked = j.at("linked").get<bool>(); 
  v.name = j.at("name").get<std::string>(); 
  v.reason = j.at("reason").get<std::string>(); 
  }
}