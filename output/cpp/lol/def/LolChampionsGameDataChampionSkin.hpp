#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolChampionsCollectionsChampionSkinEmblem.hpp>
#include <lol/def/LolChampionsGameDataChampionChroma.hpp>
namespace lol {
  struct LolChampionsGameDataChampionSkin { 
    std::vector<LolChampionsGameDataChampionChroma> chromas;
    std::optional<std::string> chromaPath;
    std::optional<std::string> featuresText;
    std::string tilePath;
    std::string name;
    std::vector<LolChampionsCollectionsChampionSkinEmblem> emblems;
    std::optional<std::string> splashVideoPath;
    int32_t id;
    std::optional<std::string> skinType;
    std::string uncenteredSplashPath;
    std::string cardPath;
    std::string splashPath;
    std::string rarityGemPath; 
  };
  void to_json(json& j, const LolChampionsGameDataChampionSkin& v) {
  j["chromas"] = v.chromas; 
  j["chromaPath"] = v.chromaPath; 
  j["featuresText"] = v.featuresText; 
  j["tilePath"] = v.tilePath; 
  j["name"] = v.name; 
  j["emblems"] = v.emblems; 
  j["splashVideoPath"] = v.splashVideoPath; 
  j["id"] = v.id; 
  j["skinType"] = v.skinType; 
  j["uncenteredSplashPath"] = v.uncenteredSplashPath; 
  j["cardPath"] = v.cardPath; 
  j["splashPath"] = v.splashPath; 
  j["rarityGemPath"] = v.rarityGemPath; 
  }
  void from_json(const json& j, LolChampionsGameDataChampionSkin& v) {
  v.chromas = j.at("chromas").get<std::vector<LolChampionsGameDataChampionChroma>>(); 
  v.chromaPath = j.at("chromaPath").get<std::optional<std::string>>(); 
  v.featuresText = j.at("featuresText").get<std::optional<std::string>>(); 
  v.tilePath = j.at("tilePath").get<std::string>(); 
  v.name = j.at("name").get<std::string>(); 
  v.emblems = j.at("emblems").get<std::vector<LolChampionsCollectionsChampionSkinEmblem>>(); 
  v.splashVideoPath = j.at("splashVideoPath").get<std::optional<std::string>>(); 
  v.id = j.at("id").get<int32_t>(); 
  v.skinType = j.at("skinType").get<std::optional<std::string>>(); 
  v.uncenteredSplashPath = j.at("uncenteredSplashPath").get<std::string>(); 
  v.cardPath = j.at("cardPath").get<std::string>(); 
  v.splashPath = j.at("splashPath").get<std::string>(); 
  v.rarityGemPath = j.at("rarityGemPath").get<std::string>(); 
  }
}