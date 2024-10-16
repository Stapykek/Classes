cmake_minimum_required (VERSION 3.15)	# Проверка версии СМаке.
										# Если версия установленой программы
										# старее указаной, произайдёт аварийное отключение

set(PROJECT_NAME example) 				# задать значение PROJECT NAME
project("${PROJECT_NAME}")				# установить имя проекта

set(CMAKE_CXX_STANDARD 17)				# устанавливаем 17 стандарт языка
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

# Сказать программе, что должен быть исполняемый файл 
add_executable("${PROJECT_NAME}" main.cpp)
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/a.txt DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/Debug) #копируем текстовый файл в папку с билдом, чтобы исполняемый файл смог его найти.(иначе работать не будет)
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/b.txt DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/Debug)
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/input.txt DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/Debug)
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/output.txt DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/Debug)