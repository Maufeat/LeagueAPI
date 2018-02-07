#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RecofrienderLinkResource { 
    std::string name;
    bool linked;
    std::string reason; 
  };
  inline void to_json(json& j, const RecofrienderLinkResource& v) {
    j["name"] = v.name; 
    j["linked"] = v.linked; 
    j["reason"] = v.reason; 
  }
  inline void from_json(const json& j, RecofrienderLinkResource& v) {
    v.name = j.at("name").get<std::string>(); 
    v.linked = j.at("linked").get<bool>(); 
    v.reason = j.at("reason").get<std::string>(); 
  }
}