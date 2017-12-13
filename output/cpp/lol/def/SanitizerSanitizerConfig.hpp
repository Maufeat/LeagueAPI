#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct SanitizerSanitizerConfig { 
    std::optional<std::string> Level2Filter;
    std::optional<std::string> Level3Unfilter;
    std::optional<std::string> Level2Unfilter;
    std::optional<std::string> Level1Filter;
    std::optional<std::string> Level0Filter;
    std::optional<std::string> Level3Filter;
    std::optional<std::string> Level1Unfilter;
    std::optional<std::string> Level0Unfilter; 
  };
  void to_json(json& j, const SanitizerSanitizerConfig& v) {
  j["Level2Filter"] = v.Level2Filter; 
  j["Level3Unfilter"] = v.Level3Unfilter; 
  j["Level2Unfilter"] = v.Level2Unfilter; 
  j["Level1Filter"] = v.Level1Filter; 
  j["Level0Filter"] = v.Level0Filter; 
  j["Level3Filter"] = v.Level3Filter; 
  j["Level1Unfilter"] = v.Level1Unfilter; 
  j["Level0Unfilter"] = v.Level0Unfilter; 
  }
  void from_json(const json& j, SanitizerSanitizerConfig& v) {
  v.Level2Filter = j.at("Level2Filter").get<std::optional<std::string>>(); 
  v.Level3Unfilter = j.at("Level3Unfilter").get<std::optional<std::string>>(); 
  v.Level2Unfilter = j.at("Level2Unfilter").get<std::optional<std::string>>(); 
  v.Level1Filter = j.at("Level1Filter").get<std::optional<std::string>>(); 
  v.Level0Filter = j.at("Level0Filter").get<std::optional<std::string>>(); 
  v.Level3Filter = j.at("Level3Filter").get<std::optional<std::string>>(); 
  v.Level1Unfilter = j.at("Level1Unfilter").get<std::optional<std::string>>(); 
  v.Level0Unfilter = j.at("Level0Unfilter").get<std::optional<std::string>>(); 
  }
}