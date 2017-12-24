#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RecofrienderLinkResource { 
    bool linked;
    std::string reason;
    std::string name; 
  };
  inline void to_json(json& j, const RecofrienderLinkResource& v) {
    j["linked"] = v.linked; 
    j["reason"] = v.reason; 
    j["name"] = v.name; 
  }
  inline void from_json(const json& j, RecofrienderLinkResource& v) {
    v.linked = j.at("linked").get<bool>(); 
    v.reason = j.at("reason").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
  }
}