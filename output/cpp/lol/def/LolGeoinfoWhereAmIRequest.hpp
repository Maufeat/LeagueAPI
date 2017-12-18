#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolGeoinfoWhereAmIRequest { 
    std::string ipAddress; 
  };
  inline void to_json(json& j, const LolGeoinfoWhereAmIRequest& v) {
    j["ipAddress"] = v.ipAddress; 
  }
  inline void from_json(const json& j, LolGeoinfoWhereAmIRequest& v) {
    v.ipAddress = j.at("ipAddress").get<std::string>(); 
  }
}