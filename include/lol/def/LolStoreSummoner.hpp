#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolStoreSummoner { 
    uint64_t acctId;
    uint64_t sumId; 
  };
  inline void to_json(json& j, const LolStoreSummoner& v) {
    j["acctId"] = v.acctId; 
    j["sumId"] = v.sumId; 
  }
  inline void from_json(const json& j, LolStoreSummoner& v) {
    v.acctId = j.at("acctId").get<uint64_t>(); 
    v.sumId = j.at("sumId").get<uint64_t>(); 
  }
}