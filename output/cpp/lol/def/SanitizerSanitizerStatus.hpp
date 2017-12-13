#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct SanitizerSanitizerStatus { 
    std::string region;
    std::map<std::string, uint32_t> filteredWordCountsByLevel;
    bool ready;
    uint32_t allowedCharsCount;
    std::string locale;
    uint32_t projectedCharsCount;
    uint32_t breakingCharsCount; 
  };
  void to_json(json& j, const SanitizerSanitizerStatus& v) {
  j["region"] = v.region; 
  j["filteredWordCountsByLevel"] = v.filteredWordCountsByLevel; 
  j["ready"] = v.ready; 
  j["allowedCharsCount"] = v.allowedCharsCount; 
  j["locale"] = v.locale; 
  j["projectedCharsCount"] = v.projectedCharsCount; 
  j["breakingCharsCount"] = v.breakingCharsCount; 
  }
  void from_json(const json& j, SanitizerSanitizerStatus& v) {
  v.region = j.at("region").get<std::string>(); 
  v.filteredWordCountsByLevel = j.at("filteredWordCountsByLevel").get<std::map<std::string, uint32_t>>(); 
  v.ready = j.at("ready").get<bool>(); 
  v.allowedCharsCount = j.at("allowedCharsCount").get<uint32_t>(); 
  v.locale = j.at("locale").get<std::string>(); 
  v.projectedCharsCount = j.at("projectedCharsCount").get<uint32_t>(); 
  v.breakingCharsCount = j.at("breakingCharsCount").get<uint32_t>(); 
  }
}