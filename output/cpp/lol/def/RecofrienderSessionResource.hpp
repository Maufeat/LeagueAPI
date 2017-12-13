#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct RecofrienderSessionResource { 
    uint32_t sessionExpire;
    std::string sessionState; 
  };
  void to_json(json& j, const RecofrienderSessionResource& v) {
  j["sessionExpire"] = v.sessionExpire; 
  j["sessionState"] = v.sessionState; 
  }
  void from_json(const json& j, RecofrienderSessionResource& v) {
  v.sessionExpire = j.at("sessionExpire").get<uint32_t>(); 
  v.sessionState = j.at("sessionState").get<std::string>(); 
  }
}