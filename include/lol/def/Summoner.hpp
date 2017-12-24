#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct Summoner { 
    uint64_t sumId;
    uint64_t acctId; 
  };
  inline void to_json(json& j, const Summoner& v) {
    j["sumId"] = v.sumId; 
    j["acctId"] = v.acctId; 
  }
  inline void from_json(const json& j, Summoner& v) {
    v.sumId = j.at("sumId").get<uint64_t>(); 
    v.acctId = j.at("acctId").get<uint64_t>(); 
  }
}