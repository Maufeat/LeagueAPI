#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct SanitizerSanitizerStatus { /**/ 
    std::string locale;/**/
    uint32_t breakingCharsCount;/**/
    uint32_t allowedCharsCount;/**/
    uint32_t projectedCharsCount;/**/
    std::string region;/**/
    bool ready;/**/
    std::map<std::string, uint32_t> filteredWordCountsByLevel;/**/
  };
  static void to_json(json& j, const SanitizerSanitizerStatus& v) { 
    j["locale"] = v.locale;
    j["breakingCharsCount"] = v.breakingCharsCount;
    j["allowedCharsCount"] = v.allowedCharsCount;
    j["projectedCharsCount"] = v.projectedCharsCount;
    j["region"] = v.region;
    j["ready"] = v.ready;
    j["filteredWordCountsByLevel"] = v.filteredWordCountsByLevel;
  }
  static void from_json(const json& j, SanitizerSanitizerStatus& v) { 
    v.locale = j.at("locale").get<std::string>(); 
    v.breakingCharsCount = j.at("breakingCharsCount").get<uint32_t>(); 
    v.allowedCharsCount = j.at("allowedCharsCount").get<uint32_t>(); 
    v.projectedCharsCount = j.at("projectedCharsCount").get<uint32_t>(); 
    v.region = j.at("region").get<std::string>(); 
    v.ready = j.at("ready").get<bool>(); 
    v.filteredWordCountsByLevel = j.at("filteredWordCountsByLevel").get<std::map<std::string, uint32_t>>(); 
  }
} 