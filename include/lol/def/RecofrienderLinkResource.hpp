#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RecofrienderLinkResource { 
    std::string name;
    std::string reason;
    bool linked; 
  };
  inline void to_json(json& j, const RecofrienderLinkResource& v) {
    j["name"] = v.name; 
    j["reason"] = v.reason; 
    j["linked"] = v.linked; 
  }
  inline void from_json(const json& j, RecofrienderLinkResource& v) {
    v.name = j.at("name").get<std::string>(); 
    v.reason = j.at("reason").get<std::string>(); 
    v.linked = j.at("linked").get<bool>(); 
  }
}