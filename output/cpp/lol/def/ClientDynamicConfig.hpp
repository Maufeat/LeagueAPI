#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct ClientDynamicConfig { 
    std::string configs;
    bool delta;
    bool compressed; 
  };
  void to_json(json& j, const ClientDynamicConfig& v) {
    j["configs"] = v.configs; 
    j["delta"] = v.delta; 
    j["compressed"] = v.compressed; 
  }
  void from_json(const json& j, ClientDynamicConfig& v) {
    v.configs = j.at("configs").get<std::string>(); 
    v.delta = j.at("delta").get<bool>(); 
    v.compressed = j.at("compressed").get<bool>(); 
  }
}