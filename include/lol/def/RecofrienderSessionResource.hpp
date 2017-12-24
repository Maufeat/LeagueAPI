#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RecofrienderSessionResource { 
    std::string sessionState;
    uint32_t sessionExpire; 
  };
  inline void to_json(json& j, const RecofrienderSessionResource& v) {
    j["sessionState"] = v.sessionState; 
    j["sessionExpire"] = v.sessionExpire; 
  }
  inline void from_json(const json& j, RecofrienderSessionResource& v) {
    v.sessionState = j.at("sessionState").get<std::string>(); 
    v.sessionExpire = j.at("sessionExpire").get<uint32_t>(); 
  }
}