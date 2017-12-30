#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLoginIdToken { 
    std::string token;
    uint64_t expiry; 
  };
  inline void to_json(json& j, const LolLoginIdToken& v) {
    j["token"] = v.token; 
    j["expiry"] = v.expiry; 
  }
  inline void from_json(const json& j, LolLoginIdToken& v) {
    v.token = j.at("token").get<std::string>(); 
    v.expiry = j.at("expiry").get<uint64_t>(); 
  }
}